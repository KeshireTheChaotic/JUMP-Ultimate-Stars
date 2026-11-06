
/* JUS-CLASS jus_TagCLDS::vfunc_08 [class-virtual] slot 8 of vtable 020949ec (own slot, not
   inherited) */

undefined4 *
jus_TagCLDS::vfunc_08(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_0201a228(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &jus_TagCNTR_Part_02094b9c::vftable;
    puVar2[1] = *(undefined4 *)(param_1 + 4);
    *puVar2 = &vftable;
    cVar1 = *(char *)(param_1 + 0xc);
    *(char *)(puVar2 + 3) = cVar1;
    if (cVar1 == '\0') {
      puVar2[2] = *(undefined4 *)(param_1 + 8);
    }
    else {
      FUN_020436f4(puVar2,puVar2[1],*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),
                   param_4);
    }
  }
  return puVar2;
}

