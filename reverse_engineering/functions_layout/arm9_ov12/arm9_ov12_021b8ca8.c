
/* JUS-CLASS ALWidgetBase_021d2c98::vfunc_23 [class-virtual] slot 23 of vtable 021d2c98 (own slot,
   not inherited) */

void ALWidgetBase_021d2c98::vfunc_23(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_68;
  int local_64 [6];
  undefined1 auStack_4c [8];
  undefined4 local_44;
  undefined4 local_40;
  undefined1 auStack_3c [8];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [16];
  
  iVar3 = *(int *)(param_1 + 4);
  local_68 = (int)*(short *)(iVar3 + 0xa0) << 0xc;
  local_64[0] = (int)*(short *)(iVar3 + 0xa2) << 0xc;
  FUN_021b8a58(*(undefined4 *)(param_1 + 4),&local_68,local_64);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 100) + 0x60))();
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 100) + 100))();
  local_64[1] = 0x1000;
  local_64[2] = 0x1000;
  local_64[3] = 0x1000;
  FUN_021b8840(auStack_24,local_64 + 3,local_64 + 2,local_64 + 1);
  local_64[4] = 0x10000;
  local_64[5] = 0xffff0000;
  FUN_021b0ef8(auStack_4c,local_64 + 5,local_64 + 4);
  local_44 = 0;
  local_40 = 0xffff0000;
  FUN_021b0ef8(auStack_3c,&local_40,&local_44);
  iVar4 = (int)*(short *)(iVar3 + 0xa2);
  iVar3 = (int)*(short *)(iVar3 + 0xa6);
  if (iVar4 < iVar3) {
    uVar1 = iVar3 - iVar4;
  }
  else {
    uVar1 = iVar4 - iVar3;
  }
  uVar2 = FUN_0200c99c(uVar1 >> 1);
  FUN_0200c9e4(0x45800000,uVar2);
  local_34 = FUN_0200c8e0();
  local_30 = 0;
  FUN_021b0ef8(auStack_2c,&local_30,&local_34);
  FUN_0202beec(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 4) + 100),auStack_2c,auStack_3c,
               auStack_4c,auStack_24,auStack_24,auStack_24,&DAT_02093c2c,&DAT_02093c2c,&DAT_02093c2c
              );
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 100) + 0x68))();
  return;
}

