
void FUN_0202d908(int *param_1,int param_2)

{
  int local_10;
  int local_c;
  
  local_10 = param_2 << 0xc;
  FUN_020199f8(&local_c,&local_10,0x43b40000);
  *param_1 = (int)(local_c + ((uint)(local_c >> 0xf) >> 0x10)) >> 0x10;
  return;
}

