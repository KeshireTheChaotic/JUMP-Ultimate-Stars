
void FUN_02033308(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  
  uVar1 = FUN_02004b04(param_2);
  pcVar2 = *(code **)(**(int **)(param_1 + 4) + 0x18);
  (*pcVar2)(*(int **)(param_1 + 4),param_2,uVar1,pcVar2,param_4);
  return;
}

