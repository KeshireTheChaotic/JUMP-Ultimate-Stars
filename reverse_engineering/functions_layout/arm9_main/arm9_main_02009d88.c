
void FUN_02009d88(int param_1,int param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 5) + param_2;
  while( true ) {
    pbVar1 = pbVar1 + -1;
    if (*pbVar1 < 9) {
      *pbVar1 = *pbVar1 + 1;
      return;
    }
    if (pbVar1 == (byte *)(param_1 + 5)) break;
    *pbVar1 = 0;
  }
  *pbVar1 = 1;
  *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + 1;
  return;
}

