
int FUN_0216b514(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  iVar6 = *param_3;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  uVar5 = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  iVar6 = iVar6 + 0x1e7c;
  do {
    if (8 < uVar5) {
LAB_0216b570:
      if (*(int *)(param_1 + 0x30) == 0) {
        param_1 = 0;
        *(byte *)(iVar6 + 0x100) = *(byte *)(iVar6 + 0x100) | 2;
      }
      else {
        uStack_18 = param_4;
        FUN_0216e898((char)param_3[9],0,param_1 + 0x48,param_1 + 0x4a);
        if (*(short *)(param_1 + 0x4a) < 0) {
          *(undefined1 *)(param_1 + 0x62) = 0xff;
          *(short *)(param_1 + 0x4a) = -*(short *)(param_1 + 0x4a);
        }
        else {
          *(undefined1 *)(param_1 + 0x62) = 1;
        }
        FUN_02166a1c(param_1 + 0x38,param_3 + 3);
        if ((char)param_3[7] == '\0') {
          uVar1 = 1;
        }
        else {
          uVar1 = 0xff;
        }
        *(undefined1 *)(param_1 + 0x61) = uVar1;
        *(undefined1 *)(param_1 + 0x4f) = 0;
        *(char *)(param_1 + 0x60) = (char)param_3[9];
        uVar2 = FUN_0216b740(*(undefined4 *)(param_1 + 0x2c));
        FUN_02166a1c(param_1 + 0x40,uVar2);
        *(short *)(param_1 + 0x5c) = (short)((uint)(*(short *)(param_1 + 0x48) * 0x1800) >> 8);
        *(short *)(param_1 + 0x5e) = (short)((uint)(*(short *)(param_1 + 0x4a) * 0x1800) >> 8);
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x5a) = 0;
        *(undefined1 *)(param_1 + 99) = *(undefined1 *)((int)param_3 + 0x25);
        *(undefined4 *)(param_1 + 0x50) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x34);
        *(undefined4 *)(param_1 + 0x54) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x3c);
        iVar3 = FUN_02026f94();
        *(int *)(param_1 + 0x34) = iVar3;
        FUN_02028384(*(undefined4 *)(iVar3 + 4),FUN_0216ce6c);
        piVar4 = *(int **)(*(int *)(param_1 + 0x34) + 4);
        (**(code **)(*piVar4 + 0x24))(piVar4,param_1 + 0x2c);
        local_1c = 0xa7000;
        piVar4 = *(int **)(*(int *)(param_1 + 0x34) + 4);
        (**(code **)(*piVar4 + 0xa0))(piVar4,&local_1c);
        if (*(int *)(*(int *)(param_1 + 8) + 0x14) != 0) {
          *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) | 4;
          FUN_0216c5f0(iVar6 + 8,param_1 + 0x2c,param_2,param_1,
                       *(undefined4 *)(*(int *)(param_1 + 8) + 0x14));
          *(char *)(param_1 + 0x4e) = *(char *)(param_1 + 0x4e) + '\x01';
          *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) & 0xfb;
        }
        FUN_0216c5f0(iVar6,param_1 + 0x2c,param_2,param_1,
                     *(undefined4 *)(*(int *)(param_1 + 8) + 0xc));
        *(char *)(param_1 + 0x4e) = *(char *)(param_1 + 0x4e) + '\x01';
      }
      return param_1;
    }
    if ((*(byte *)(iVar6 + 0x100) & 1) == 0) {
      *(int *)(param_1 + 0x30) = iVar6;
      *(byte *)(iVar6 + 0x100) = *(byte *)(iVar6 + 0x100) | 1;
      goto LAB_0216b570;
    }
    uVar5 = uVar5 + 1;
    iVar6 = iVar6 + 0x108;
  } while( true );
}

