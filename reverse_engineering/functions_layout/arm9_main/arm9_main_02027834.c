
void FUN_02027834(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(undefined **)(param_1 + 0x30) == &DAT_020a11b8) {
    iVar1 = jus_AllocDebug(0x44);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = jus_Class_02095620::jus_Class_02095620();
    }
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  (**(code **)(**(int **)(param_1 + 0x30) + 0x54))(*(int **)(param_1 + 0x30),param_2,param_3);
  return;
}

