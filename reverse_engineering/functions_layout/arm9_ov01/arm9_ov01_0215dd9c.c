
void FUN_0215dd9c(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined1 auStack_270 [12];
  undefined1 local_264 [8];
  undefined1 auStack_25c [56];
  undefined1 auStack_224 [512];
  
  iVar9 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar10 = *(int *)(iVar9 + 0xac);
  func_0x021b7170();
  iVar1 = (**(code **)(*param_2 + 8))();
  if ((iVar1 == -0x7ffef000) && (iVar1 = (**(code **)*param_2)(), iVar1 == 4)) {
    if (*(int *)(iVar9 + 0x304) == 0) {
      func_0x021b65d8(*(undefined4 *)(*(int *)(iVar9 + 0x60) + 4));
      iVar1 = FUN_0215a664(iVar9);
      if (iVar1 != 0) {
        FUN_0207342c(0x78,0);
        func_0x021bac28(*(undefined4 *)(iVar9 + 0x2d8),0x78,0,0,0,0,0,0);
        while (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar9 + 0x2d8)), iVar1 == 0) {
          (*DAT_020a0e18)();
        }
        FUN_02073ef0(0x10,1);
        while (iVar1 = FUN_02073840(), iVar1 == 0) {
          (*DAT_020a0e18)();
        }
        piVar2 = *(int **)(*(int *)(iVar9 + 0x150) + 4);
        (**(code **)(*piVar2 + 0xd8))(piVar2,0);
        uVar3 = (**(code **)(**(int **)(*(int *)(iVar9 + 0xac) + 4) + 0x194))();
        uVar3 = FUN_021571a8(iVar9,uVar3);
        piVar2 = *(int **)(iVar9 + 0x2e8);
        FUN_02073ef0(0xf,1);
        (**(code **)(**(int **)(*piVar2 + 4) + 0xd8))(*(int **)(*piVar2 + 4),1);
        (**(code **)(**(int **)(piVar2[2] + 4) + 0xd8))(*(int **)(piVar2[2] + 4),1);
        local_274 = 0xfff00000;
        FUN_0214f764(piVar2[2],&local_274);
        iVar1 = FUN_0215e2ec(piVar2[2],0x564d5049,0);
        FUN_02013c48(*(undefined4 *)(iVar1 + 4),&DAT_02093c8c,0);
        (**(code **)(**(int **)(piVar2[1] + 4) + 0xd8))(*(int **)(piVar2[1] + 4),1);
        local_278 = 0xfff00000;
        FUN_0214f764(piVar2[1],&local_278);
        local_27c = 0;
        FUN_0215b3f4(piVar2[1],&local_27c);
        local_288 = 0;
        local_284 = 0;
        local_280 = 0xffffd000;
        FUN_0214dc68(auStack_270,&local_280,&local_284,&local_288);
        iVar1 = FUN_0215e2ec(piVar2[1],0x564d5049,0);
        FUN_02013c48(*(undefined4 *)(iVar1 + 4),auStack_270,0);
        FUN_0215e4f4(piVar2);
        uVar4 = FUN_02071f08();
        FUN_0215f1fc(uVar4,uVar3,auStack_224);
        uVar5 = func_0x021bdd90();
        iVar1 = 0;
        for (uVar11 = 0; uVar11 < uVar5; uVar11 = uVar11 + 0x10) {
          iVar8 = 0;
          local_264[0] = 0;
          iVar9 = 0;
          while ((iVar8 < 0x10 &&
                 (iVar6 = FUN_020741f4(local_264,auStack_224 + (uVar11 + iVar8) * 2,4), iVar6 != 0))
                ) {
            auStack_25c[iVar9] = 0xf0;
            auStack_25c[iVar9 + 1] = 0xa2;
            auStack_25c[iVar9 + 2] = 0;
            iVar8 = iVar8 + 4;
            iVar9 = iVar9 + 10;
          }
          piVar7 = *(int **)(piVar2[iVar1 + 5] + 4);
          (**(code **)(*(int *)piVar7[0x19] + 0x70))();
          (**(code **)(*piVar7 + 0xc4))();
          piVar7 = *(int **)(*(int *)(piVar2[iVar1 + 5] + 4) + 100);
          (**(code **)(*piVar7 + 0x68))(piVar7,local_264);
          (**(code **)(**(int **)(piVar2[iVar1 + 5] + 4) + 0xd8))
                    (*(int **)(piVar2[iVar1 + 5] + 4),1);
          iVar1 = iVar1 + 1;
        }
        iVar1 = FUN_0203b424(0);
        *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x956) = 1;
        iVar1 = FUN_0203b424(0);
        local_28c = 0x2000;
        piVar7 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
        (**(code **)(*piVar7 + 0x10))(piVar7,&local_28c);
        iVar1 = FUN_0203b3f4();
        FUN_02150768(*(undefined4 *)(iVar1 + 0x88),1,&DAT_0216c988);
        while (iVar1 = FUN_02073840(), iVar1 == 0) {
          (*DAT_020a0e18)();
        }
        *(undefined1 *)(piVar2 + 0x22) = 0;
        FUN_02028384(*(undefined4 *)(*piVar2 + 4),0x215e545);
        FUN_02028330(*(undefined4 *)(*piVar2 + 4));
        func_0x021b65e0(*(undefined4 *)(piVar2[4] + 4));
      }
    }
    else if (*(int *)(iVar9 + 0x304) == 2) {
      iVar1 = (**(code **)(**(int **)(*(int *)(iVar9 + 0xac) + 4) + 0x194))();
      FUN_0207342c(0x78,0);
      iVar8 = FUN_020720d8();
      if (iVar1 == iVar8) {
        func_0x021b65d8(*(undefined4 *)(*(int *)(iVar9 + 0x60) + 4));
        func_0x021bac28(*(undefined4 *)(iVar9 + 0x2d8),0x77,0,0,0,0,0,0);
        while (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar9 + 0x2d8)), iVar1 == 0) {
          (*DAT_020a0e18)();
        }
        iVar1 = func_0x021bacfc(*(undefined4 *)(iVar9 + 0x2d8));
        if (iVar1 == 0) {
          func_0x021b65e0(*(undefined4 *)(*(int *)(iVar9 + 0x60) + 4));
          func_0x021b6214(*(undefined4 *)(*(int *)(iVar9 + 0x60) + 4),1);
          func_0x021b6214(*(undefined4 *)(*(int *)(iVar9 + 0xac) + 4),1);
        }
        else {
          *(undefined1 *)(iVar9 + 0x311) = 0;
          FUN_02159ef4(iVar9);
        }
      }
      else {
        FUN_0215ceb4(iVar9);
      }
    }
    func_0x021b7170(*(undefined4 *)(iVar10 + 4));
  }
  return;
}

