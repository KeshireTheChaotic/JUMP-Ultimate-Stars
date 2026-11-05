
/* WARNING: Removing unreachable block (ram,0x021520dc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02151f2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uStack_bc;
  int iStack_b8;
  uint uStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  uint uStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  iVar6 = (*(int **)(param_1 + 4))[4];
  uStack_18 = param_4;
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
  if ((1 < uVar1) && ((*(uint *)(iVar6 + 0x150) & 0x20) != 0)) {
    iVar8 = *(int *)(*(int *)(param_1 + 4) + 0x124);
    iVar2 = (**(code **)(**(int **)(*(int *)(iVar6 + 0x134) + 4) + 0x194))();
    iVar2 = FUN_0215275c(*(undefined1 *)(*(int *)(iVar6 + 0x14c) + iVar2),iVar8);
    if (iVar8 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = 0xd;
    }
    iVar7 = iVar7 + 0x861000;
    iVar3 = (**(code **)(**(int **)(*(int *)(iVar6 + 0x134) + 4) + 0x194))();
    iVar3 = FUN_0216446c(*(undefined4 *)(iVar6 + 0x144),
                         *(undefined1 *)
                          (*(int *)(*(int *)(iVar6 + 0x140) + 4) +
                           (uint)*(byte *)(*(int *)(iVar6 + 0x14c) + iVar3) * 0xa4 + 0x76));
    if (iVar3 == 0) {
      uStack_94 = FUN_0200d12c(iVar2,100);
      iStack_8c = iVar2 + uStack_94 * -100;
      iStack_90 = FUN_0200d338(iStack_8c,10);
      iStack_8c = iStack_8c + iStack_90 * -10;
      if (9 < uStack_94) {
        iStack_8c = 9;
        iStack_90 = 9;
        uStack_94 = 9;
      }
      if (iVar2 < 0) {
        iStack_8c = 10;
        iStack_90 = 10;
        uStack_94 = 10;
      }
      if (iVar8 == 0) {
        iVar2 = 0x17;
      }
      else {
        iVar2 = 0xf;
      }
      iVar3 = FUN_021519b4(param_1,1);
      if (uStack_94 == 0) {
        (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
      }
      else {
        FUN_02023894(*(undefined4 *)(iVar3 + 4),iVar7 + uStack_94,0);
        (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
        (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
        iStack_28 = iVar2 << 0xc;
        FUN_0214f764(iVar3,&iStack_28);
      }
      if (iVar8 == 0) {
        iVar3 = 0xc;
      }
      else {
        iVar3 = 8;
      }
      iVar5 = FUN_021519b4(param_1,2);
      if ((uStack_94 == 0) && (iStack_90 == 0)) {
        (*(code *)**(undefined4 **)(iVar5 + 4))(*(undefined4 **)(iVar5 + 4),0);
      }
      else {
        FUN_02023894(*(undefined4 *)(iVar5 + 4),iVar7 + iStack_90,0);
        (**(code **)(**(int **)(*(int *)(iVar5 + 4) + 0x68) + 0x6c))();
        (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
        iStack_24 = (iVar2 + iVar3) * 0x1000;
        FUN_0214f764(iVar5,&iStack_24);
      }
      if (iVar8 == 0) {
        iVar5 = 0xc;
      }
      else {
        iVar5 = 8;
      }
      iVar5 = iVar2 + iVar3 + iVar5;
      iVar2 = FUN_021519b4(param_1,3);
      FUN_02023894(*(undefined4 *)(iVar2 + 4),iVar7 + iStack_8c,0);
      (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
      (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
      iStack_20 = iVar5 * 0x1000;
      FUN_0214f764(iVar2,&iStack_20);
      if (iVar8 == 0) {
        iVar2 = 0x16;
      }
      else {
        iVar2 = 0x11;
      }
      iVar7 = FUN_021519b4(param_1,4);
      if (iVar8 == 0) {
        iVar8 = 0xb;
      }
      else {
        iVar8 = 0x18;
      }
      FUN_02023894(*(undefined4 *)(iVar7 + 4),iVar8 + 0x861000,0);
      (**(code **)(**(int **)(*(int *)(iVar7 + 4) + 0x68) + 0x6c))();
      (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
      iStack_1c = (iVar5 + iVar2) * 0x1000;
      FUN_0214f764(iVar7,&iStack_1c);
      iVar2 = 5;
      do {
        iVar8 = FUN_021519b4(param_1,iVar2);
        (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 9);
    }
    else if (iVar3 == 1) {
      iVar3 = FUN_0200d12c(iVar2,0x3c);
      uVar4 = FUN_0200c954(iVar2);
      uVar4 = FUN_0200c5ac(uVar4,0x42700000);
      FUN_0200c9e4(0x45800000,uVar4);
      iVar5 = FUN_0200c8e0();
      iStack_a8 = FUN_0200d12c(iVar3,0x3c);
      iStack_a0 = iVar3 + iStack_a8 * -0x3c;
      iVar3 = (iVar5 + iVar3 * -0x1000 + 0x14) * 100;
      iStack_98 = (int)(iVar3 + ((uint)(iVar3 >> 0xb) >> 0x14)) >> 0xc;
      uStack_ac = FUN_0200d338(iStack_a8,10);
      iStack_a8 = iStack_a8 + uStack_ac * -10;
      iStack_a4 = FUN_0200d338(iStack_a0);
      iStack_a0 = iStack_a0 + iStack_a4 * -10;
      iStack_9c = FUN_0200d338(iStack_98);
      iStack_98 = iStack_98 + iStack_9c * -10;
      if (5 < uStack_ac) {
        iStack_a4 = 5;
        uStack_ac = 5;
        iStack_98 = 9;
        iStack_9c = 9;
        iStack_a0 = 9;
        iStack_a8 = 9;
      }
      if (iVar2 < 0) {
        iStack_98 = 10;
        iStack_9c = 10;
        iStack_a0 = 10;
        iStack_a4 = 10;
        iStack_a8 = 10;
        uStack_ac = 10;
      }
      if (iVar8 == 0) {
        iVar2 = 7;
      }
      else {
        iVar2 = 5;
      }
      iVar3 = FUN_021519b4(param_1,1);
      FUN_02023894(*(undefined4 *)(iVar3 + 4),iVar7 + uStack_ac,0);
      (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
      (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
      iStack_48 = iVar2 << 0xc;
      FUN_0214f764(iVar3,&iStack_48);
      if (iVar8 == 0) {
        iVar3 = 0xc;
      }
      else {
        iVar3 = 8;
      }
      iVar5 = FUN_021519b4(param_1,2);
      FUN_02023894(*(undefined4 *)(iVar5 + 4),iVar7 + iStack_a8,0);
      (**(code **)(**(int **)(*(int *)(iVar5 + 4) + 0x68) + 0x6c))();
      (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
      iStack_44 = (iVar2 + iVar3) * 0x1000;
      FUN_0214f764(iVar5,&iStack_44);
      if (iVar8 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = 6;
      }
      iVar5 = iVar2 + iVar3 + iVar5;
      iVar2 = FUN_021519b4(param_1,3);
      FUN_02023894(*(undefined4 *)(iVar2 + 4),0x86100c,0);
      (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
      (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
      iStack_40 = iVar5 * 0x1000;
      FUN_0214f764(iVar2,&iStack_40);
      if (iVar8 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = 6;
      }
      iVar5 = iVar5 + iVar2;
      iVar2 = FUN_021519b4(param_1,4);
      FUN_02023894(*(undefined4 *)(iVar2 + 4),iVar7 + iStack_a4,0);
      (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
      (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
      iStack_3c = iVar5 * 0x1000;
      FUN_0214f764(iVar2,&iStack_3c);
      if (iVar8 == 0) {
        iVar2 = 0xc;
      }
      else {
        iVar2 = 8;
      }
      iVar5 = iVar5 + iVar2;
      iVar2 = FUN_021519b4(param_1,5);
      FUN_02023894(*(undefined4 *)(iVar2 + 4),iVar7 + iStack_a0,0);
      (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
      (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
      iStack_38 = iVar5 * 0x1000;
      FUN_0214f764(iVar2,&iStack_38);
      if (iVar8 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = 6;
      }
      iVar5 = iVar5 + iVar2;
      iVar2 = FUN_021519b4(param_1,6);
      FUN_02023894(*(undefined4 *)(iVar2 + 4),0x86100c,0);
      (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
      (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
      iStack_34 = iVar5 * 0x1000;
      FUN_0214f764(iVar2,&iStack_34);
      if (iVar8 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = 6;
      }
      iVar5 = iVar5 + iVar2;
      iVar2 = FUN_021519b4(param_1,7);
      FUN_02023894(*(undefined4 *)(iVar2 + 4),iVar7 + iStack_9c,0);
      (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
      (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
      iStack_30 = iVar5 * 0x1000;
      FUN_0214f764(iVar2,&iStack_30);
      if (iVar8 == 0) {
        iVar2 = 0xc;
      }
      else {
        iVar2 = 8;
      }
      iVar8 = FUN_021519b4(param_1,8);
      FUN_02023894(*(undefined4 *)(iVar8 + 4),iVar7 + iStack_98,0);
      (**(code **)(**(int **)(*(int *)(iVar8 + 4) + 0x68) + 0x6c))();
      (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
      iStack_2c = (iVar5 + iVar2) * 0x1000;
      FUN_0214f764(iVar8,&iStack_2c);
    }
    else if (iVar3 == 2) {
      uStack_bc = FUN_0200d12c(iVar2,10);
      iStack_b8 = iVar2 + uStack_bc * -10;
      if (9 < uStack_bc) {
        iStack_b8 = 9;
        uStack_bc = 9;
      }
      if (iVar2 < 0) {
        iStack_b8 = 10;
        uStack_bc = 10;
      }
      if (iVar8 == 0) {
        iVar2 = 0x17;
        iVar3 = 0xc;
      }
      else {
        iVar2 = 0xf;
        iVar3 = 8;
      }
      iVar5 = FUN_021519b4(param_1,1);
      if (uStack_bc == 0) {
        (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
      }
      else {
        FUN_02023894(*(undefined4 *)(iVar5 + 4),iVar7 + uStack_bc,0);
        (**(code **)(**(int **)(*(int *)(iVar5 + 4) + 0x68) + 0x6c))();
        (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
        iStack_50 = (iVar2 + iVar3) * 0x1000;
        FUN_0214f764(iVar5,&iStack_50);
      }
      if (iVar8 == 0) {
        iVar8 = 0xc;
      }
      else {
        iVar8 = 8;
      }
      iVar5 = FUN_021519b4(param_1,2);
      FUN_02023894(*(undefined4 *)(iVar5 + 4),iVar7 + iStack_b8,0);
      (**(code **)(**(int **)(*(int *)(iVar5 + 4) + 0x68) + 0x6c))();
      (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
      iStack_4c = (iVar2 + iVar3 + iVar8) * 0x1000;
      FUN_0214f764(iVar5,&iStack_4c);
      iVar2 = 3;
      do {
        iVar8 = FUN_021519b4(param_1,iVar2);
        (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 9);
    }
    else {
      (**(code **)(**(int **)(*(int *)(iVar6 + 0x134) + 4) + 0x194))();
      iVar2 = 1;
      do {
        iVar8 = FUN_021519b4(param_1,iVar2);
        (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 9);
    }
    if (*(int *)(*(int *)(param_1 + 4) + 0x124) == 2) {
      *(uint *)(iVar6 + 0x150) = *(uint *)(iVar6 + 0x150) & 0xffffffdf;
    }
  }
  return;
}

