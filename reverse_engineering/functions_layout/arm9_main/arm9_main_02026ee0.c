
/* JUS-CLASS jus_Class_020947e4::jus_Class_020947e4 [class-default] stores vtable 020947e4 into
   *this (constructor) */

undefined4 * jus_Class_020947e4::jus_Class_020947e4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = jus_AllocDebug(0x44);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = ALObjectImp_020990e0::ALObjectImp_020990e0(iVar1,0);
  }
  jus_Class_02094658::jus_Class_02094658(param_1,uVar2);
  *param_1 = &vftable;
  return param_1;
}

