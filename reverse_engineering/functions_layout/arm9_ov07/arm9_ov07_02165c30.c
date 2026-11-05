
void FUN_02165c30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined1 auStack_28 [24];
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_020517fc(auStack_28,0,0x16);
  FUN_02051890(param_2,auStack_28,0x14);
  FUN_02165c04(*(undefined4 *)(param_1 + 0x40));
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 100);
  (**(code **)(*piVar1 + 0x6c))(piVar1,auStack_28,0xffffffff);
  return;
}

