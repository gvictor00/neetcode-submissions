"""
Definition of Interval:
class Interval(object):
    def __init__(self, start, end):
        self.start = start
        self.end = end
"""

class Solution:
    def canAttendMeetings(self, intervals: List[Interval]) -> bool:
        if len(intervals) == 0:
            return True
        
        # Inplace sort
        intervals.sort(key=lambda i: i.start)

        for i, val in enumerate(intervals):
            if i != 0:
                start = intervals[i].start 
                past_end = intervals[i-1].end  
                if start < past_end:
                    return False
        
        return True

            