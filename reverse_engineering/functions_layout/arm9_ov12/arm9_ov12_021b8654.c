
/* JUS-CLASS ALWidgetBase_021d2b58::vfunc_22 [class-virtual] slot 22 of vtable 021d2b58 (own slot,
   not inherited) */

void ALWidgetBase_021d2b58::vfunc_22(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  
  piVar1 = (int *)FUN_021acab4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x90));
  iVar2 = (**(code **)(*piVar1 + 0x34))();
  if (iVar2 != 0x55424457) {
    FUN_021b85ec(auStack_54,10,10,10,10);
    FUN_021ac9b0(*(int *)(param_1 + 4) + 0x94,auStack_54);
    FUN_0202b3c8(0x40);
    iVar2 = FUN_021acab4();
    FUN_021b87e0(param_1,iVar2);
    (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 100) + 100))();
    iVar3 = FUN_021acab4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x90));
    iVar3 = *(int *)(iVar3 + 4);
    local_70 = 0;
    local_6c = 0x4cc;
    local_68 = 0;
    FUN_021b8840(auStack_2c,&local_68,&local_6c,&local_70);
    uVar4 = FUN_0200c99c((int)*(short *)(iVar3 + 0xce));
    uVar4 = FUN_0200bfb4(0x41200000,uVar4);
    FUN_0200c9e4(0x45800000,uVar4);
    local_64 = FUN_0200c8e0();
    uVar4 = FUN_0200c99c((int)*(short *)(iVar3 + 0xcc));
    uVar4 = FUN_0200bfb4(0x41200000,uVar4);
    FUN_0200c9e4(0x45800000,uVar4);
    local_60 = FUN_0200c8e0();
    local_5c = 0xffff6000;
    local_58 = 0xffff6000;
    FUN_021b8818(auStack_1c,&local_58,&local_5c,&local_60,&local_64);
    FUN_0202b9e4(*(undefined4 *)(*(int *)(iVar2 + 4) + 100),1,auStack_1c,auStack_2c,&DAT_02093dac);
    local_8c = 0x1000;
    local_88 = 0x1000;
    local_84 = 0x1000;
    FUN_021b8840(auStack_4c,&local_84,&local_88,&local_8c);
    uVar4 = FUN_0200c99c((int)*(short *)(iVar3 + 0xce));
    uVar4 = FUN_0200bfb4(0x40a00000,uVar4);
    FUN_0200c9e4(0x45800000,uVar4);
    local_80 = FUN_0200c8e0();
    uVar4 = FUN_0200c99c((int)*(short *)(iVar3 + 0xcc));
    uVar4 = FUN_0200bfb4(0x40a00000,uVar4);
    FUN_0200c9e4(0x45800000,uVar4);
    local_7c = FUN_0200c8e0();
    local_78 = 0xffffb000;
    local_74 = 0xffffb000;
    FUN_021b8818(auStack_3c,&local_74,&local_78,&local_7c,&local_80);
    FUN_0202bc38(*(undefined4 *)(*(int *)(iVar2 + 4) + 100),auStack_3c,auStack_4c,&DAT_02093dac);
    (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 100) + 0x68))();
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  }
  return;
}

