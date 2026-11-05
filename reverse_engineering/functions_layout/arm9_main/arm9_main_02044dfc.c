
void FUN_02044dfc(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    *(uint *)(iVar1 + 4) = param_3 & 0xffff;
    *(undefined4 *)(iVar1 + 0xc) = param_2;
    return;
  }
  puVar2 = (undefined4 *)jus_AllocDebug(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &jus_Class_02094b9c::vftable;
    *puVar2 = &jus_TagBBDS::vftable;
    puVar2[1] = param_3;
    *(undefined1 *)(puVar2 + 2) = 0;
    puVar2[3] = param_2;
  }
  *(undefined4 **)(param_1 + 0x1c) = puVar2;
  return;
}

