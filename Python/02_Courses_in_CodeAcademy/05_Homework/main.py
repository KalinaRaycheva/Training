import re


# saturday's homework - Clean empty string from arr, using lambda and filter
def clear_empty_str(array):
    func = lambda name: name != ""
    result_from_filter = list(filter(func, array))
    return result_from_filter


names = ["John", "Tom", "", "Bob"]
print(clear_empty_str(names))

# without lambda, but specifically here seems better
print(list(filter(None, names)))


# sunday's homework- Verify that the URL is correct.
# It has start with https://www., then have to contain some text and have to ends with .com/.eu/.it/.bg
def check_valid_sites(url):
    if re.findall(r'(^https://www.)([a-zA-z0-9]+)(.com|.eu|.it|.bg)$', url):
        return True
    return False


sites = ["https://www.aslkasljd.com", "https://www.aslkasljd.bg", "https://aslkasljd.com", "https://www.aslkasljd.com5"]
for site in sites:
    if check_valid_sites(site):
        print(site)