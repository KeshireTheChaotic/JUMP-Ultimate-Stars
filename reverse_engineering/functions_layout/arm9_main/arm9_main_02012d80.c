
/* JUS-CLASS jus_TagAGEC::vfunc_24 [class-virtual] slot 24 of vtable 02097418 (own slot, not
   inherited) */

int jus_TagAGEC::vfunc_24(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0201a228(0x30);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = jus_TagAGEC(iVar1,0xffffffff);
  }
  *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  puVar3 = (undefined4 *)FUN_0201a228(8);
  if (puVar3 != (undefined4 *)0x0) {
    jus_Class_02094ecc::jus_Class_02094ecc(puVar3,iVar2);
    *puVar3 = &jus_TagAGEC_Part_02094e24::vftable;
  }
  return iVar2;
}

