
void FUN_02074cf4(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_38 [20];
  
                    /* JUS-TAG strings=[".aar","chr/"] */
  uVar7 = *(uint *)(&DAT_02092704 + param_3 * 8);
  uVar8 = uVar7 & 0xffff00;
  param_1[0x22] = uVar8;
  iVar5 = uVar8 + param_2 * 0x20;
  *(char *)(param_1 + 0x23) = (char)param_2;
  *(char *)((int)param_1 + 0x8d) = (char)param_3;
  iVar1 = FUN_02074c48(iVar5 + 0x60);
  if (iVar1 == 0) {
    thunk_FUN_0207400c(auStack_38,&DAT_0209f1e8);
    uVar3 = *(undefined4 *)(&DAT_02092700 + param_3 * 8);
    thunk_FUN_020741c4(auStack_38);
    thunk_FUN_020741c4(auStack_38,&DAT_0209f1f8);
    iVar1 = FUN_02033bb8(auStack_38);
    if (iVar1 != 0) {
      iVar1 = FUN_0203b404();
      FUN_0206c498(*(undefined4 *)(iVar1 + 0x88));
      iVar1 = FUN_020101f4(auStack_38,0);
      *param_1 = iVar1;
      iVar1 = FUN_0201088c(FUN_02074540,uVar8 + 0x38);
      if (iVar1 == 0) {
        iVar1 = FUN_02074c74(uVar8 + 0x38);
        param_1[0x1f] = iVar1;
        if (iVar1 != 0) {
          iVar1 = uVar8 + 0x38;
          do {
            iVar2 = FUN_02023894(*(undefined4 *)(param_1[0x1f] + 4),iVar1,0xffffffff);
            iVar1 = iVar1 + 1;
          } while (iVar2 == 0);
          (**(code **)(**(int **)(*(int *)(param_1[0x1f] + 4) + 0x68) + 0xdc))();
          FUN_020282f4(*(undefined4 *)(param_1[0x1f] + 4));
          (**(code **)(**(int **)(param_1[0x1f] + 4) + 0xd8))(*(int **)(param_1[0x1f] + 4),0);
          FUN_020107f4(FUN_02074540,uVar8 + 0x38,0x28,param_1[0x1f]);
        }
      }
      (**(code **)(**(int **)(*param_1 + 8) + 0x50))();
      FUN_0206c54c();
    }
    thunk_FUN_0207400c(auStack_38,&DAT_0209f1e8);
    thunk_FUN_020741c4(auStack_38,uVar3);
    thunk_FUN_020741c4(auStack_38,(&PTR_DAT_0209f198)[param_2]);
    thunk_FUN_020741c4(auStack_38,&DAT_0209f1f8);
    iVar1 = ALStreamImp::Create(auStack_38);
    iVar2 = FUN_02010218();
    param_1[1] = iVar2;
    (**(code **)(**(int **)(iVar1 + 4) + 0xc))();
    iVar1 = FUN_0203b404();
    FUN_0206c498(*(undefined4 *)(iVar1 + 0x88));
    uVar4 = *(uint *)(&DAT_02092704 + param_3 * 8);
    uVar8 = 0;
    do {
      iVar1 = FUN_02074c48(uVar8 + (uVar4 & 0xffff00) + param_2 * 0x20 + 0x60);
      uVar6 = uVar8 + 1;
      param_1[uVar8 + 0x17] = iVar1;
      uVar8 = uVar6;
    } while (uVar6 < 8);
    iVar2 = (*(uint *)(&DAT_02092704 + param_3 * 8) & 0xffff00) + param_2 * 0x20;
    iVar1 = FUN_02074c48(iVar2 + 0x60);
    param_1[4] = iVar1;
    iVar1 = FUN_02074c74(iVar2 + 0x60);
    param_1[0x20] = iVar1;
    if (iVar1 != 0) {
      iVar1 = iVar5 + 0x60;
      do {
        iVar2 = FUN_02023894(*(undefined4 *)(param_1[0x20] + 4),iVar1,0xffffffff);
        iVar1 = iVar1 + 1;
      } while (iVar2 == 0);
      (**(code **)(**(int **)(*(int *)(param_1[0x20] + 4) + 0x68) + 0xdc))();
      FUN_020282f4(*(undefined4 *)(param_1[0x20] + 4));
      (**(code **)(**(int **)(param_1[0x20] + 4) + 0xd8))(*(int **)(param_1[0x20] + 4),0);
      FUN_020107f4(FUN_02074540,iVar5 + 0x60,0x20,param_1[0x20]);
    }
    (**(code **)(**(int **)(param_1[1] + 8) + 0x50))();
    FUN_0206c54c();
  }
  else {
    iVar5 = FUN_0203b404();
    FUN_0206c498(*(undefined4 *)(iVar5 + 0x88));
    param_1[4] = iVar1;
    FUN_0206c54c();
  }
  if ((uVar7 & 1) != 0) {
    *(undefined1 *)((int)param_1 + 0x8e) = 1;
  }
  FUN_0206c498(param_4);
  uVar7 = *(uint *)(&DAT_02092704 + param_3 * 8);
  iVar5 = *(int *)(&DAT_020924a4 + param_2 * 4);
  FUN_02010bb4(0,(uVar7 & 0xffff00) + iVar5,0);
  iVar1 = FUN_02011b38();
  param_1[3] = iVar1;
  FUN_02023894(*(undefined4 *)(iVar1 + 4),(uVar7 & 0xffff00) + iVar5,0xffffffff);
  iVar1 = FUN_0206c6f0(param_1[3],0x31305053);
  param_1[2] = iVar1;
  FUN_0206c54c();
  FUN_02074c98(param_1,1);
  return;
}

