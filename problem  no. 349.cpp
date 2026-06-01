class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        my_dict = {}
        for i in nums1:
            my_dict[i] = True
        res = []
        for i in nums2:
            if i in my_dict:
                res.append(i)
                del my_dict[i]
        return res