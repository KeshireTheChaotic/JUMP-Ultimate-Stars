
bool FUN_02078328(int param_1,int param_2)

{
  bool bVar1;
  
  param_2 = *(char *)(param_1 + 0x5cd) + param_2;
  bVar1 = param_2 <= *(char *)(param_1 + 0x5cc);
  if (bVar1) {
    *(char *)(param_1 + 0x5cd) = (char)param_2;
  }
  return bVar1;
}

