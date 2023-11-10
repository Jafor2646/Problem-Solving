class ParkingSystem(object):
    # big_count = 0
    # medium_count = 0
    # small_count = 0
    def __init__(self, big, medium, small):
      self.big = big
      self.medium = medium
      self.small = small
      self.big_count = 0
      self.medium_count = 0
      self.small_count = 0


    def addCar(self, carType):

      if carType == 1:
        self.big_count+=1
        if self.big_count<=self.big:
          return True
        else:
          return False

      if carType == 2:
        self.medium_count+=1
        if self.medium_count<=self.medium:         
          return True
        else:
          return False

      if carType == 3:
        self.small_count+=1
        if self.small_count<=self.small:
          return True
        else:
          return False

# Your ParkingSystem object will be instantiated and called as such:
# obj = ParkingSystem(big, medium, small)
# param_1 = obj.addCar(carType)