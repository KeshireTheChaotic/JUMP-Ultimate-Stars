
/* JUS-CLASS ALTextDS_021d4a2c::ALTextDS_021d4a2c [class-source-file] stores vtable 021d4a2c into
   *this (constructor) */

undefined4 *
ALTextDS_021d4a2c::ALTextDS_021d4a2c
          (undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  ALTextImp_021d4ae4::ALTextImp_021d4ae4();
  *param_1 = &vftable;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined1 *)((int)param_1 + 0x182) = 1;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)((int)param_1 + 0x1a5) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0xffffffff;
  piVar1 = (int *)FUN_020325d0(&DAT_021d52f8,param_5);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_0203341c(param_5,0,0);
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar1 + 0x2c))(piVar1,0);
      if (*piVar2 == 0x54464c41) {
        iVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1,0);
        iVar4 = (uint)*(ushort *)(iVar3 + 0xc) * 6;
        uVar8 = iVar4 + 0xe;
        if ((uVar8 & 3) == 2) {
          uVar8 = iVar4 + 0x10;
        }
        piVar2 = (int *)thunk_FUN_02016628(piVar1,uVar8);
        iVar4 = jus_AllocDebug(0x70,s_ALTextDS_cpp_021d4e30,&DAT_021d48d4,0x164);
        uVar6 = 0;
        if (iVar4 != 0) {
          iVar5 = jus_AllocDebug(0x14,s_ALTextDS_cpp_021d4e30,&DAT_021d48d4,0x165);
          uVar6 = 0;
          if (iVar5 != 0) {
            uVar6 = ALFont_021d4ed0::ALFont_021d4ed0(iVar5,iVar3 + 0xe,*(undefined2 *)(iVar3 + 0xc))
            ;
          }
          uVar6 = ALFont_021d4f60::ALFont_021d4f60
                            (iVar4,piVar2,*(undefined1 *)(iVar3 + 8),*(undefined1 *)(iVar3 + 9),
                             uVar6,*(undefined1 *)(iVar3 + 10));
        }
        param_1[0x15] = uVar6;
        (**(code **)(*piVar2 + 0xc))();
      }
      else {
        piVar2 = (int *)FUN_02035c90(param_5);
        uVar7 = (**(code **)(*piVar2 + 0x3c))();
        iVar3 = jus_AllocDebug(0x70,s_ALTextDS_cpp_021d4e30,&DAT_021d48d4,0x16c);
        uVar6 = 0;
        if (iVar3 != 0) {
          iVar4 = jus_AllocDebug(8,s_ALTextDS_cpp_021d4e30,&DAT_021d48d4,0x16d);
          uVar6 = 0;
          if (iVar4 != 0) {
            uVar6 = ALTextDS_021d4ef4::ALTextDS_021d4ef4();
          }
          uVar6 = ALFont_021d4f60::ALFont_021d4f60(iVar3,uVar7,param_6,param_7,uVar6,0x10);
        }
        param_1[0x15] = uVar6;
        (**(code **)(*piVar2 + 0xc))();
      }
      (**(code **)(*piVar1 + 0xc))();
    }
    param_1[0x3f] = param_3 + 7U & 0xfffffff8;
    param_1[0x40] = param_4 + 7U & 0xfffffff8;
    FUN_0203263c(param_1[0x15],param_5);
    *(undefined1 *)(param_1[0x15] + 0x58) = 1;
    FUN_020324dc(&DAT_021d52f8,param_1[0x15]);
  }
  else {
    param_1[0x15] = piVar1;
    (**(code **)(*piVar1 + 8))();
    param_1[0x3f] = param_3 + 7U & 0xfffffff8;
    param_1[0x40] = param_4 + 7U & 0xfffffff8;
  }
  uVar6 = (**(code **)(*(int *)param_1[0x15] + 0x2c))();
  param_1[0x3a] = uVar6;
  iVar3 = 0;
  if (param_1[0x3f] != 0) {
    iVar3 = param_1[0x40];
  }
  if (param_1[0x3f] != 0 && iVar3 != 0) {
    FUN_021c9b2c(param_1);
  }
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  return param_1;
}

