
undefined4 FUN_02151664(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int aiStack_24 [3];
  int iStack_18;
  undefined4 uStack_14;
  
  uVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (param_2 < 0x19) {
    uStack_14 = param_4;
                    /* WARNING: Switch is manually overridden */
    switch(param_2) {
    case 0:
      FUN_020282f4(*(undefined4 *)(*(int *)(iVar3 + 0x10) + 4));
      piVar1 = *(int **)(*(int *)(iVar3 + 0x10) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      piVar1 = *(int **)(*(int *)(iVar3 + 0x28) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      break;
    case 1:
      iVar2 = **(int **)(iVar3 + 0xc);
      if ((~*(uint *)(iVar2 + *(int *)(iVar2 + 0x74) * 4 + 0x18) &
           *(uint *)(iVar2 + *(int *)(iVar2 + 0x70) * 4 + 0x18) & 0x10) == 0) {
        aiStack_24[2] = (*(short *)(iVar3 + 0x34) + -0xe) * 0x1000;
        uVar4 = 1;
        iStack_18 = (*(short *)(iVar3 + 0x32) + 100) * 0x1000;
        FUN_021519d0(*(undefined4 *)(iVar3 + 0x1c),&iStack_18,aiStack_24 + 2);
        FUN_02028330(*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 4));
        piVar1 = *(int **)(*(int *)(iVar3 + 0x1c) + 4);
        (**(code **)(*piVar1 + 0xd8))(piVar1,1);
        aiStack_24[1] = 0x43000;
        FUN_021512bc(*(undefined4 *)(iVar3 + 0x1c),aiStack_24 + 1);
      }
      else {
        FUN_020282f4(*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 4));
        piVar1 = *(int **)(*(int *)(iVar3 + 0x1c) + 4);
        (**(code **)(*piVar1 + 0xd8))(piVar1,0);
        FUN_0207342c(0x78,7);
      }
      break;
    case 2:
      iStack_28 = (int)*(short *)(&DAT_02171032 + param_3 * 4) << 0xc;
      aiStack_24[0] = (int)*(short *)(&DAT_02171030 + param_3 * 4) << 0xc;
      FUN_021519d0(*(undefined4 *)(iVar3 + 0x18),aiStack_24,&iStack_28);
      FUN_02028330(*(undefined4 *)(*(int *)(iVar3 + 0x18) + 4));
      piVar1 = *(int **)(*(int *)(iVar3 + 0x18) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
      break;
    case 3:
      FUN_020282f4(*(undefined4 *)(*(int *)(iVar3 + 0x18) + 4));
      piVar1 = *(int **)(*(int *)(iVar3 + 0x18) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      break;
    case 4:
      iStack_30 = (int)*(short *)(&DAT_02171022 + param_3 * 4) << 0xc;
      iStack_2c = (int)*(short *)(&DAT_02171020 + param_3 * 4) << 0xc;
      FUN_021519d0(*(undefined4 *)(iVar3 + 0x20),&iStack_2c,&iStack_30);
      FUN_02028330(*(undefined4 *)(*(int *)(iVar3 + 0x20) + 4));
      piVar1 = *(int **)(*(int *)(iVar3 + 0x20) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
      break;
    case 5:
      FUN_020282f4(*(undefined4 *)(*(int *)(iVar3 + 0x20) + 4));
      piVar1 = *(int **)(*(int *)(iVar3 + 0x20) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      break;
    case 6:
      FUN_0214e9e4(*(undefined4 *)(DAT_02172960 + 0xd4));
      if (param_3 == 0) {
        FUN_02073ef0(7,2);
      }
      else {
        FUN_02073ef0(6,2);
      }
      break;
    case 7:
      iVar3 = FUN_02073840();
      if (iVar3 == 0) {
        uVar4 = 1;
      }
      else {
        FUN_0214e9c0(*(undefined4 *)(DAT_02172960 + 0xd4));
      }
      break;
    case 8:
      FUN_02157024(*(undefined4 *)(DAT_02172960 + 0xdc));
      FUN_02157024(*(undefined4 *)(DAT_02172960 + 0xe0));
      break;
    case 9:
      FUN_0206bbec();
      break;
    case 10:
      FUN_02151a1c(iVar3,1,0xffffffff,10);
      *(short *)(iVar3 + 0x30) = (short)param_3;
      break;
    case 0xb:
      FUN_02151a1c(iVar3,3,0x1180,10);
      break;
    case 0xc:
      FUN_02151a48(iVar3,1,0xffffd3f0);
      FUN_02151a1c(iVar3,4,0xffffffff,7);
      break;
    case 0xd:
      *(undefined1 *)(iVar3 + 0x39) =
           *(undefined1 *)
            (**(int **)(*(int *)(*(int *)(DAT_02172960 + 0xdc) + 0x1a0) + 0x174) + 0x8d);
      FUN_02151a1c(iVar3,5,0xffffffff,6);
      break;
    case 0xe:
      FUN_02151a1c(iVar3,6,0xffffffff,5);
      break;
    case 0xf:
      FUN_020783b8(*(undefined4 *)(*(int *)(DAT_02172960 + 0xdc) + 0x1b4),0x800);
      *(undefined1 *)(iVar3 + 0x39) = *(undefined1 *)(*(int *)(DAT_02172960 + 0x118) + 0x5cd);
      FUN_02151a1c(iVar3,7,0xffffffff,3);
      break;
    case 0x10:
      FUN_02151a1c(iVar3,8,0xffffefff,0xe);
      break;
    case 0x11:
      FUN_02151a1c(iVar3,3,0xfffff981,10);
      break;
    case 0x12:
      FUN_02151a1c(iVar3,3,0x1180,10);
      break;
    case 0x13:
      FUN_02151a48(iVar3,2,0);
      FUN_02151a1c(iVar3,2,0xfffffeff,7);
      break;
    case 0x14:
      FUN_02151a48(iVar3,1,0xffffd3f0);
      FUN_02151a1c(iVar3,9,0xffffffff,7);
      break;
    case 0x15:
      FUN_02151a1c(iVar3,10,0xfffff981,7);
      break;
    case 0x16:
      FUN_02151a48(iVar3,1,0x40000);
      FUN_02151a1c(iVar3,3,0,0);
      break;
    case 0x17:
      FUN_02151a1c(iVar3,0xb,0xfffff6ff,7);
      break;
    case 0x18:
      FUN_02151a1c(iVar3,2,0xffffff7f,7);
    }
  }
  return uVar4;
}

