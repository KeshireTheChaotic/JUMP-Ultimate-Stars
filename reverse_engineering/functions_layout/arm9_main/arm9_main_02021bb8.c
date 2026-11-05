
/* JUS-CLASS ALWidgetBase_0209c1e0::ALWidgetBase_0209c1e0 [class-source-file] stores vtable 0209c1e0
   into *this (constructor) */

int * ALWidgetBase_0209c1e0::ALWidgetBase_0209c1e0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  ALObjectImp_020990e0::ALObjectImp_020990e0();
  *param_1 = (int)&vftable;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = DAT_020a0e68;
  DAT_020a0cf8 = DAT_020a0cf8 + 1;
  iVar1 = (**(code **)(*(int *)param_2[0x14] + 0x10))();
  param_1[0x14] = iVar1;
  iVar1 = (**(code **)(*(int *)param_2[0x19] + 0x54))((int *)param_2[0x19],param_1);
  param_1[0x19] = iVar1;
  if ((param_2[0x11] != 0) && ((*(byte *)(*(int *)(param_2[0x11] + 0x50) + 0x24) & 0x7f) >> 6 == 0))
  {
    (**(code **)(*param_1 + 0xd4))();
  }
  piVar2 = (int *)param_2[0x18];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xb4))(piVar2,param_1);
  }
  piVar2 = (int *)param_2[7];
  if (piVar2 != (int *)0x0) {
    while ((int *)*piVar2 != (int *)0x0) {
      piVar2 = (int *)*piVar2;
    }
    for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      piVar3 = piVar2 + -8;
      iVar1 = (**(code **)(*piVar3 + 0x80))();
      if (iVar1 == 0) {
        piVar3 = (int *)(**(code **)(*piVar3 + 0x60))(piVar3,0);
        FUN_02037ed8(param_1 + 7,piVar3 + 8);
        (**(code **)(*piVar3 + 100))(piVar3,param_1);
        (**(code **)(*param_1 + 0x80))(param_1,piVar3);
      }
    }
  }
  puVar5 = (undefined4 *)param_2[0x17];
  while (puVar5 != (undefined4 *)0x0) {
    piVar2 = puVar5 + -0x12;
    puVar5 = (undefined4 *)*puVar5;
    uVar4 = (**(code **)(*piVar2 + 0x18))();
    func_0x021b0b70(uVar4,param_1);
    (**(code **)(*param_1 + 0xf0))(param_1,uVar4);
  }
  iVar1 = (**(code **)(*param_2 + 0xa8))();
  bVar6 = iVar1 == 0;
  if (bVar6) {
    iVar1 = param_2[0x18];
  }
  if (bVar6 && iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)param_2[0x1a] + 0x158))((int *)param_2[0x1a],param_1);
    param_1[0x1a] = iVar1;
  }
  return param_1;
}

