
void FUN_02026ff8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_020a1020 != 0) {
    return;
  }
  iVar1 = jus_AllocDebug(0x20);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = PropBindInstance_02095200::PropBindInstance_02095200(iVar1,0);
  }
  DAT_020a1020 = uVar2;
  return;
}

