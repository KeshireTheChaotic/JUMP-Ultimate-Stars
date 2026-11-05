
/* JUS-CLASS jus_TagDLSE::~jus_TagDLSE [class-type-tag] slot 0/1 of vtable 0209ad30; resets vtables
   (destructor) */

undefined4 * jus_TagDLSE::~jus_TagDLSE(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &vftable;
  uVar2 = param_1[0xd];
  iVar1 = FUN_0201a9ec(uVar2);
  if (iVar1 == 0) {
    FUN_0201a958(uVar2,1);
  }
  jus_Class_02097558::jus_Class_02097558(param_1);
  return param_1;
}

