
/* JUS-CLASS jus_TagSPD2::~jus_TagSPD2 [class-type-tag] slot 0/1 of vtable 02096068; resets vtables
   (destructor) */

undefined4 * jus_TagSPD2::~jus_TagSPD2(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &vftable;
  iVar2 = param_1[0x14];
  if ((iVar2 != 0) && (iVar1 = FUN_0201a9ec(iVar2), iVar1 == 0)) {
    FUN_0201a958(iVar2,1);
  }
  jus_Class_02095a08::jus_Class_02095a08(param_1);
  iVar2 = FUN_0201a9ec(param_1);
  if (iVar2 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

