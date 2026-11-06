
/* JUS-GAME Movie::Movie_Create [source-string] __FILE__="Movie.cpp" __FUNCTION__="Movie_Create"
   lines=[90] passed to 1 source-location call(s) */

int * Movie::Movie_Create(byte param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  piVar1 = (int *)thunk_FUN_0201a228(0xe8,s_Movie_cpp_02160fe8,&DAT_02160fd8,0x5a);
  uVar2 = FUN_020517fc(piVar1,0,0xe8);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    iVar3 = FUN_02026f94(uVar2);
    *piVar1 = iVar3;
    local_20 = 0x80000;
    (**(code **)(**(int **)(iVar3 + 4) + 0xa0))(*(int **)(iVar3 + 4),&local_20);
    FUN_02028384(*(undefined4 *)(*piVar1 + 4),FUN_021524c4);
    (**(code **)(**(int **)(*piVar1 + 4) + 0x24))(*(int **)(*piVar1 + 4),piVar1);
    FUN_020282f4(*(undefined4 *)(*piVar1 + 4));
    *(byte *)(piVar1 + 0x39) = *(byte *)(piVar1 + 0x39) | param_1;
    iVar3 = FUN_020432b8();
    piVar1[2] = 0;
    if (iVar3 == 0) {
      iVar3 = FUN_0201a418(DAT_020a0dd8,0,0x10000);
      piVar1[2] = iVar3;
      iVar3 = FUN_020545b4(0,iVar3,iVar3 + 0x10000);
      piVar1[1] = iVar3;
      FUN_020544dc(0,piVar1[1],piVar1[2],piVar1[2] + 0x10000);
    }
    else {
      iVar3 = FUN_0205431c(0);
      iVar4 = FUN_02054330(0);
      uVar6 = iVar3 + 0x1fU & 0xffffffe0;
      if (DAT_020b02a4 == '\0') {
        uVar6 = FUN_02054654(0,uVar6,iVar4 + 0x1fU & 0xffffffe0,1);
        FUN_020540d8(0,uVar6);
        DAT_020b02a4 = '\x01';
      }
      iVar3 = FUN_020545b4(0,uVar6,uVar6 + 0x10000);
      piVar1[1] = iVar3;
      FUN_020544dc(0,iVar3,uVar6,uVar6 + 0x10000);
    }
    FUN_02054710(0,piVar1[1]);
    FUN_0203d4e4();
    GX_DisableBankForBG();
    GX_DisableBankForTex();
    FUN_02065490(0xb);
    MIi_CpuClearFast(0,0x6800000,0xa4000);
    FUN_02065110();
    GX_SetBankForBG(3);
    GX_SetBankForTex(8);
    iVar3 = FUN_0203b414(0);
    local_40 = 0;
    piVar5 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
    (**(code **)(*piVar5 + 0x10))(piVar5,&local_40);
    iVar3 = FUN_0203b414(1);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
    iVar3 = FUN_0203b414(1);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
    iVar3 = FUN_0203b414(1);
    piVar5 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
    (**(code **)(*piVar5 + 0x90))(piVar5,0);
    iVar3 = FUN_0203b414(1);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0,0);
    iVar3 = FUN_0203b414(1);
    local_3c = 0x1000;
    piVar5 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
    (**(code **)(*piVar5 + 0x10))(piVar5,&local_3c);
    iVar3 = FUN_0203b414(2);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),5);
    iVar3 = FUN_0203b414(2);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),8);
    iVar3 = FUN_0203b414(2);
    piVar5 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
    (**(code **)(*piVar5 + 0x90))(piVar5,0x20000);
    iVar3 = FUN_0203b414(2);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x20,0x20);
    iVar3 = FUN_0203b414(2);
    local_38 = 0x3000;
    piVar5 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
    (**(code **)(*piVar5 + 0x10))(piVar5,&local_38);
    iVar3 = FUN_0203b414(2);
    *(undefined1 *)(*(int *)(*(int *)(iVar3 + 0x88) + 4) + 0x974) = 1;
    iVar3 = FUN_0203b414(3);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),5);
    iVar3 = FUN_0203b414(3);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x20,0x20);
    iVar3 = FUN_0203b414(3);
    local_34 = 0x3000;
    piVar5 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
    (**(code **)(*piVar5 + 0x10))(piVar5,&local_34);
    iVar3 = FUN_0203b414(3);
    piVar5 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
    (**(code **)(*piVar5 + 0x90))(piVar5,0x20000);
    iVar3 = FUN_0203b414(3);
    *(undefined1 *)(*(int *)(*(int *)(iVar3 + 0x88) + 4) + 0x974) = 1;
    if (param_3 != 0) {
      iVar3 = FUN_0203b424(0);
      FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
      iVar3 = FUN_0203b424(0);
      FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
      iVar3 = FUN_0203b424(0);
      piVar5 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
      (**(code **)(*piVar5 + 0x90))(piVar5,0);
      iVar3 = FUN_0203b424(0);
      FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0,0);
      iVar3 = FUN_0203b424(0);
      local_30 = 0;
      piVar5 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
      (**(code **)(*piVar5 + 0x10))(piVar5,&local_30);
      iVar3 = FUN_0203b424(1);
      FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
      iVar3 = FUN_0203b424(1);
      FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
      iVar3 = FUN_0203b424(1);
      piVar5 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
      (**(code **)(*piVar5 + 0x90))(piVar5,0);
      iVar3 = FUN_0203b424(1);
      FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0,0);
      iVar3 = FUN_0203b424(1);
      uStack_2c = 0x1000;
      piVar5 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
      (**(code **)(*piVar5 + 0x10))(piVar5,&uStack_2c);
      iVar3 = FUN_0203b424(2);
      FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
      iVar3 = FUN_0203b424(2);
      FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
      iVar3 = FUN_0203b424(2);
      piVar5 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
      (**(code **)(*piVar5 + 0x90))(piVar5,0);
      iVar3 = FUN_0203b424(2);
      FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0,0);
      iVar3 = FUN_0203b424(2);
      uStack_28 = 0x2000;
      piVar5 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
      (**(code **)(*piVar5 + 0x10))(piVar5,&uStack_28);
      iVar3 = FUN_0203b424(3);
      FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),5);
      iVar3 = FUN_0203b424(3);
      FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x20,0x20);
      iVar3 = FUN_0203b424(3);
      uStack_24 = 0x3000;
      piVar5 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
      (**(code **)(*piVar5 + 0x10))(piVar5,&uStack_24);
      iVar3 = FUN_0203b424(3);
      piVar5 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
      (**(code **)(*piVar5 + 0x90))(piVar5,0x20000);
      iVar3 = FUN_0203b424(3);
      *(undefined1 *)(*(int *)(*(int *)(iVar3 + 0x88) + 4) + 0x974) = 1;
    }
    FUN_02064744(piVar1 + 3);
    iVar3 = FUN_0206451c(piVar1 + 3,param_2);
    if (iVar3 != 0) {
      iVar3 = FUN_02152bb4(piVar1 + 3,0xc,*(byte *)(piVar1 + 0x39) & 1);
      piVar1[0x27] = iVar3;
      if (iVar3 != 0 && param_3 != 0) {
        FUN_02064744(piVar1 + 0x15);
        iVar3 = FUN_0206451c(piVar1 + 0x15,param_3);
        if (iVar3 != 0) {
          iVar3 = FUN_02152bb4(piVar1 + 0x15,0xc,*(byte *)(piVar1 + 0x39) & 1);
          piVar1[0x28] = iVar3;
        }
      }
    }
    iVar3 = FUN_02152b6c(piVar1[0x27]);
    iVar4 = FUN_02152b48(piVar1[0x27]);
    iVar3 = FUN_0200d338(iVar3 << 0x10,iVar4 << 7);
    iVar4 = (iVar3 + 1) * 0xc + 1;
    piVar1[0x29] = iVar3 + 1;
    piVar1[0x2a] = iVar4;
    iVar3 = FUN_02151bcc(iVar4 * 0x100);
    piVar1[0x2b] = iVar3;
    uVar6 = FUN_02152b48(piVar1[0x27]);
    iVar3 = FUN_0200d338((uVar6 >> 0x10) * 0x7fd88,0x3c);
    piVar1[0x31] = iVar3;
    piVar1[0x32] = 0;
    FUN_0204267c(DAT_020a0f64,FUN_02152868,piVar1);
  }
  return piVar1;
}

