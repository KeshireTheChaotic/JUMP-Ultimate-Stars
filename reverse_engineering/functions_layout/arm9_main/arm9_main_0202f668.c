
void FUN_0202f668(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = jus_AllocDebug(0x34);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = PropBindInstance_020950e0::PropBindInstance_020950e0
                      (iVar1,*(undefined4 *)(param_1 + 0x14),0,0,param_4);
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0xc))();
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}

