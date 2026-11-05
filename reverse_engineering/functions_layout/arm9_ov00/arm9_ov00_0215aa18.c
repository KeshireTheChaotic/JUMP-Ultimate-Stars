
void FUN_0215aa18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  if (*(int *)(*(int *)(param_1 + 4) + 0x94) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0214ed84();
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x9c) != 0) {
    FUN_0214ed84();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x124);
  local_18 = (int)*(short *)(*(int *)(param_1 + 4) + 0xa2) << 0xc;
  local_14 = (int)*(short *)(*(int *)(param_1 + 4) + 0xa0) << 0xc;
  FUN_0214f418(param_1,&local_14,&local_18);
  if (iVar1 == 5) {
    FUN_02023894(*(undefined4 *)(param_1 + 4),0xb10008,0);
  }
  else {
    FUN_02023894(*(undefined4 *)(param_1 + 4),0xb10007,0);
  }
  return;
}

