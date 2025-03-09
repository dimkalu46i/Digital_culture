import pytest
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as ec


@pytest.fixture(scope="module")
def browser():
    driver = webdriver.Chrome()
    yield driver
    driver.quit()


def test_footer_contacts(browser):
    browser.get("https://only.digital/")

    footer = WebDriverWait(browser, 10).until(
        ec.presence_of_element_located((By.TAG_NAME, "footer"))
    )

    expected_texts = [
        "hello@only.digital",
        "+7 (495) 740 99 79",
        "@onlydigitalagency"
    ]

    for text in expected_texts:
        element = WebDriverWait(footer, 10).until(
            ec.presence_of_element_located((By.XPATH, f".//*[contains(normalize-space(), '{text}')]"))
        )
        assert element.is_displayed(), f"Элемент с текстом '{text}' не найден в футере"
