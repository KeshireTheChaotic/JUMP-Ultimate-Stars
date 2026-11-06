
/* JUS-CLASS ALStreamImp::vfunc_04 [class-virtual] slot 4 of vtable 02094ac4 (own slot, not
   inherited) */

void ALStreamImp::vfunc_04(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0201a228(8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = ALStreamImp_Part_020946b8::ALStreamImp_Part_020946b8(iVar1,param_1);
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  return;
}

