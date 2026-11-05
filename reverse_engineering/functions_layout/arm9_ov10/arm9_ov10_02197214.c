
void FUN_02197214(ushort *param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  
  FUN_020517fc(param_1,0,param_4 << 1);
  pbVar1 = (byte *)(param_2 + param_3 + -1);
  for (; 1 < param_3; param_3 = param_3 + -2) {
    *param_1 = CONCAT11(pbVar1[-1],*pbVar1);
    param_1 = param_1 + 1;
    pbVar1 = pbVar1 + -2;
  }
  if (0 < param_3) {
    *param_1 = (ushort)*pbVar1;
  }
  return;
}

