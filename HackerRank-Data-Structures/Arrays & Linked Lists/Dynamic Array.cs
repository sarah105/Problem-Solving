public static List<int> dynamicArray(int n, List<List<int>> queries)
    {
        int lastAnswer = 0;
        List<List<int>> array =  new List<List<int>>();
        for(int i = 0 ; i < n ; i++){
            array.Add(new List<int>());
        }
        List<int> res = new List<int>();
        foreach(List<int> ele in queries){
            int index = (ele[1] ^ lastAnswer) % n;
            if (ele[0] == 1)
                array[index].Add(ele[2]);
            else
            {
                lastAnswer = array[index][ele[2] % array[index].Count];
                res.Add(lastAnswer);
            }
                
        }
            
        return res;
    }