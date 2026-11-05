
/* JUS-CLASS ALCollisionImp::vfunc_22 [class-virtual] slot 22 of vtable 021d1c58 (own slot, not
   inherited) */

undefined4 ALCollisionImp::vfunc_22(int param_1,int *param_2,int *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  DAT_021d5124 = DAT_021d5124 + 1;
  iVar1 = (**(code **)(*param_2 + 0x5c))();
  if (iVar1 == 0x544e4950) {
    iVar1 = (**(code **)(*param_3 + 0x4c))();
    iVar2 = (**(code **)(*param_4 + 0x4c))();
    iVar4 = *(int *)(iVar2 + 0x10) + param_2[0x17];
    if ((*(int *)(iVar1 + 0x10) + *(short *)(param_1 + 0x68) * 0x1000 + *(int *)(param_1 + 0x5c) <=
         iVar4) &&
       (iVar4 < *(int *)(iVar1 + 0x10) + *(short *)(param_1 + 0x6c) * 0x1000 +
                *(int *)(param_1 + 0x5c))) {
      iVar4 = *(int *)(iVar2 + 0x14) + param_2[0x18];
      if ((*(int *)(iVar1 + 0x14) + *(short *)(param_1 + 0x6a) * 0x1000 + *(int *)(param_1 + 0x60)
           <= iVar4) &&
         (iVar4 < *(int *)(iVar1 + 0x14) + *(short *)(param_1 + 0x6e) * 0x1000 +
                  *(int *)(param_1 + 0x60))) {
        if (param_5 != 0) {
          local_20 = 0;
          local_1c = *(undefined4 *)(iVar2 + 0x14);
          local_18 = *(undefined4 *)(iVar2 + 0x10);
          FUN_021b0ce8(param_5,&local_18,&local_1c,&local_20);
        }
        return 1;
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x58))(param_2,param_1,param_4,param_3,param_5);
  }
  return uVar3;
}

