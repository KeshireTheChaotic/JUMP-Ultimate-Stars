
/* JUS-CLASS jus_TagBBDS::vfunc_08 [class-virtual] slot 8 of vtable 020949a4 (own slot, not
   inherited) */

undefined4 * jus_TagBBDS::vfunc_08(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0201a228(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &jus_TagCNTR_Part_02094b9c::vftable;
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    *puVar1 = &vftable;
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    if (*(char *)(puVar1 + 2) != '\0') {
      uVar2 = FUN_0201a228(puVar1[1] << 2);
      puVar1[3] = uVar2;
      FUN_02051890(*(undefined4 *)(param_1 + 0xc),puVar1[3],puVar1[1] << 2);
    }
  }
  return puVar1;
}

