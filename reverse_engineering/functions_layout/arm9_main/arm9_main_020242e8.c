
/* JUS-CLASS jus_Class_0209c0b4::jus_Class_0209c0b4 [class-default] stores vtable 0209c0b4 into
   *this (constructor) */

int * jus_Class_0209c0b4::jus_Class_0209c0b4(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  ALWidgetBase_0209c1e0::ALWidgetBase_0209c1e0();
  *param_1 = (int)&vftable;
  FUN_0201cf08(param_1 + 0x1b);
  FUN_02010970(param_1 + 0x1b,4);
  for (uVar6 = 1; uVar1 = (**(code **)(*param_2 + 0xac))(), uVar6 < uVar1; uVar6 = uVar6 + 1) {
    piVar3 = (int *)(**(code **)(*param_2 + 0xc0))(param_2,uVar6);
    piVar3 = (int *)(**(code **)(*piVar3 + 0x18))();
    (**(code **)(*param_1 + 0xb4))(param_1,piVar3);
    (**(code **)(*piVar3 + 0xc))();
  }
  iVar2 = (**(code **)(*(int *)param_2[0x1a] + 0x158))((int *)param_2[0x1a],param_1);
  param_1[0x1a] = iVar2;
  for (uVar6 = 0; uVar1 = (**(code **)(*param_2 + 0xac))(), uVar6 < uVar1; uVar6 = uVar6 + 1) {
    iVar2 = (**(code **)(*param_2 + 0xc0))(param_2,uVar6);
    if ((*(int *)(iVar2 + 0x44) != 0) && (iVar2 = (**(code **)(*param_2 + 0xcc))(), iVar2 != -1)) {
      piVar3 = (int *)(**(code **)(*param_1 + 0xc0))(param_1,uVar6);
      uVar5 = (**(code **)(*param_1 + 0xc0))(param_1,iVar2);
      (**(code **)(*piVar3 + 0xd4))(piVar3,uVar5);
    }
  }
  for (uVar6 = 1; uVar1 = (**(code **)(*param_2 + 0xac))(), uVar6 < uVar1; uVar6 = uVar6 + 1) {
    piVar3 = (int *)(**(code **)(*param_1 + 0xc0))(param_1,uVar6);
    (**(code **)(*piVar3 + 0xa4))();
    iVar2 = (**(code **)(*param_2 + 0xc0))(param_2,uVar6);
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x68) + 0x15c))();
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 0xc0))(param_1,uVar6);
      iVar4 = (**(code **)(*param_2 + 0xc0))(param_2,uVar6);
      uVar5 = (**(code **)(**(int **)(iVar4 + 0x68) + 0x158))(*(int **)(iVar4 + 0x68),param_1);
      *(undefined4 *)(iVar2 + 0x68) = uVar5;
    }
  }
  return param_1;
}

