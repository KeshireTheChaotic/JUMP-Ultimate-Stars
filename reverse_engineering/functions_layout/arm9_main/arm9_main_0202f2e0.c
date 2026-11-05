
void FUN_0202f2e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_020a0c88 != (undefined4 *)0x0) {
    return;
  }
  puVar1 = (undefined4 *)FUN_0201a228(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    PropBindInstance_02095200::PropBindInstance_02095200(puVar1,0);
    *puVar1 = &jus_Class_020951a0::vftable;
  }
  DAT_020a0c88 = puVar1;
  iVar2 = FUN_0201a228(8);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = jus_Class_02094658::jus_Class_02094658(iVar2,0);
  }
  DAT_020a0c84 = uVar3;
  return;
}

