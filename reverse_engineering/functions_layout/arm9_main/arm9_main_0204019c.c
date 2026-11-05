
/* JUS-CLASS jus_TagSPDB::~jus_TagSPDB [class-type-tag] slot 0/1 of vtable 02095ff4; resets vtables
   (destructor) */

undefined4 * jus_TagSPDB::~jus_TagSPDB(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &vftable;
  iVar2 = param_1[0x1c];
  if ((iVar2 != 0) && (iVar1 = FUN_0201a9ec(iVar2), iVar1 == 0)) {
    FUN_0201a958(iVar2,1);
  }
  jus_Class_02095a08::jus_Class_02095a08(param_1);
  return param_1;
}

