
int FUN_020012d8(int *param_1,int param_2)

{
                    /* JUS-TAG strings=["(n >= 0) && (n < array->count)","darray.c"] */
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    FUN_02002068(s__n_>__0______n_<_array_>count__02092f18,s_darray_c_02092f0c,0,0x94);
  }
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    return 0;
  }
  return param_1[5] + param_2 * param_1[2];
}

