
void FUN_020332b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
  pcVar2 = *(code **)(**(int **)(param_1 + 4) + 0x14);
  (*pcVar2)(*(int **)(param_1 + 4),param_2,uVar1,pcVar2,param_4);
  return;
}

