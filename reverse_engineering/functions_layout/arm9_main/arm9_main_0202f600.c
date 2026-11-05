
void FUN_0202f600(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = jus_AllocDebug(8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_02094658::jus_Class_02094658(iVar1,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}

