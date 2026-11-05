
/* JUS-CLASS ALWidgetBase_021d3620::vfunc_31 [class-virtual] slot 31 of vtable 021d3620 (own slot,
   not inherited) */

void ALWidgetBase_021d3620::vfunc_31
               (int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char acStack_9c [4];
  undefined4 auStack_98 [32];
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  uVar1 = (**(code **)*param_2)();
  iVar2 = (**(code **)(*param_2 + 8))();
  if ((iVar2 == -0x7ffffffe) || (iVar2 = (**(code **)(*param_2 + 8))(), iVar2 == -0x80000000)) {
    if (DAT_021d5160 <= DAT_02093c24) {
      iVar2 = 0;
      while (iVar3 = (**(code **)(*param_1 + 0x17c))(), iVar3 != 0) {
        param_1 = (int *)(**(code **)(*param_1 + 0x17c))();
        auStack_98[iVar2] = param_1;
        iVar2 = iVar2 + 1;
      }
      do {
        iVar2 = iVar2 + -1;
        if (iVar2 < 0) {
          return;
        }
        acStack_9c[0] = '\0';
        piVar5 = (int *)auStack_98[iVar2];
        iVar3 = FUN_021b712c(piVar5);
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*param_2 + 8))();
          (**(code **)(*piVar5 + 0x138))(piVar5,uVar1,uVar4,acStack_9c);
        }
      } while (acStack_9c[0] == '\0');
    }
  }
  else {
    FUN_021b6470(param_1,param_2);
  }
  return;
}

