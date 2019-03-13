int searchInsert(int* nums, int numsSize, int target)
{
	int begin=0;
	int end=numsSize-1;
	int mid=0;
	
	while(begin<end)//
	{
	    mid=begin+(end-begin)/2;//防止溢出 取下位中位数 上位中位数是(end-begin+1)/2+begin
	           
	    if(nums[mid]==target)
	    {          
	        return mid;
	    }
	    else if(nums[mid]<target)
	    {
	        begin=mid+1;
	    }
	    else if(nums[mid]>target)
	    {
	        end=mid;        
	    }
	}
	
	if(nums[numsSize-1]<target)
	{
	    return numsSize;          
	}
	else
	{
	    return begin;
	}
}