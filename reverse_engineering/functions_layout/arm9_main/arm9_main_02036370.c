
void FUN_02036370(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = jus_AllocDebug(8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = TextureInstance::TextureInstance(iVar1,param_1);
  }
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  return;
}

