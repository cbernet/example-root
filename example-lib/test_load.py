from ROOT import gSystem

gSystem.Load('libexampleroot-tools')

from ROOT import Hello

h = Hello("Alice")
h.print_str()
