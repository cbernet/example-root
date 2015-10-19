import unittest
from load import Hello

class TestHello(unittest.TestCase):

    def test_printout(self):
        h = Hello("colin")
        h.print_str()
        self.assertTrue(True)

if __name__ == '__main__':
    unittest.main()
