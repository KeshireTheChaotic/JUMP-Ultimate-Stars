
void FUN_021650d0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  if (*(byte *)(param_1 + 0x14d) < 4) {
    *(short *)(param_1 + 0x14e) = *(short *)(param_1 + 0x14e) + -1;
    if (*(short *)(param_1 + 0x14e) == 0) {
      iVar2 = FUN_021662c4(param_1,&local_28,local_2c);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        uVar3 = FUN_0216646c(param_1);
        iVar2 = FUN_021657d4(param_1,uVar3,local_28,local_24,local_2c[0]);
      }
      if (iVar2 == 0) {
        *(undefined2 *)(param_1 + 0x14e) = 0x78;
      }
      else {
        *(undefined2 *)(param_1 + 0x14e) = *(undefined2 *)(*(int *)(param_1 + 0x24) + 2);
      }
    }
    for (iVar2 = 0; iVar2 < (int)(uint)*(byte *)(param_1 + 0x14c); iVar2 = iVar2 + 1) {
      iVar5 = iVar2 * 0xc;
      iVar4 = FUN_021663ec(*(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar5),
                           *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar5 + 4),2,0x1800);
      if (iVar4 == 0) {
        iVar5 = *(int *)(param_1 + 0x2c) + iVar5;
        cVar1 = *(char *)(iVar5 + 9);
        if (cVar1 != '\0') {
          *(char *)(iVar5 + 9) = cVar1 + -1;
        }
      }
      else {
        *(undefined1 *)(*(int *)(param_1 + 0x2c) + iVar5 + 9) = 0xb4;
      }
    }
  }
  if (*(char *)(param_1 + 0x85) != '\0') {
    iVar2 = FUN_0214ffa8(DAT_02172960);
    if (*(char *)(param_1 + 0x86) == '\0') {
      if ((int)(uint)*(byte *)(param_1 + 0x152) < iVar2) {
        *(short *)(param_1 + 0x150) = *(short *)(param_1 + 0x150) + 1;
        if (0xb4 < *(ushort *)(param_1 + 0x150)) {
          iVar2 = FUN_021668b4(param_1,1,1);
          if (iVar2 == 0) {
            *(undefined2 *)(param_1 + 0x150) = 0x5a;
          }
          else {
            *(undefined2 *)(param_1 + 0x150) = 0;
          }
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x150) = 0;
      }
    }
    else if (*(char *)(DAT_02172960 + 200) != '\0') {
      if (DAT_020afea0 == 4 || DAT_020afea0 == 0x11) {
        FUN_021668b4(param_1,DAT_020afea8,0);
      }
      else if (DAT_020afea0 == 5) {
        FUN_021668b4(param_1,1,0);
      }
      *(undefined1 *)(param_1 + 0x86) = 0;
    }
  }
  return;
}

