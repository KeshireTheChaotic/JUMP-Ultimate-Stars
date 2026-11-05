
void FUN_0218f82c(int param_1,ushort *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  if ((param_2[3] == 0) || (iVar1 = FUN_021911b8(param_2,param_3,param_1,0x11), iVar1 == 0)) {
    uVar2 = OS_DisableInterrupts();
    for (iVar1 = DAT_020aab7c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x68)) {
      piVar5 = *(int **)(iVar1 + 0xa4);
      if (((((piVar5 != (int *)0x0) && (*piVar5 != 0)) && ((char)piVar5[2] == '\n')) &&
          ((uint)*(ushort *)((int)piVar5 + 10) ==
           ((int)(uint)param_2[1] >> 8 | (param_2[1] & 0xff) << 8))) &&
         (((*(ushort *)(piVar5 + 6) == 0 ||
           ((uint)*(ushort *)(piVar5 + 6) == ((int)(uint)*param_2 >> 8 | (*param_2 & 0xff) << 8)))
          && ((uVar4 = piVar5[7], uVar4 == 0 ||
              ((uVar4 == 0xffffffff ||
               (uVar4 == (((int)(uint)*(ushort *)(param_1 + 0xc) >> 8 |
                          (*(ushort *)(param_1 + 0xc) & 0xff) << 8) << 0x10 |
                         (int)(uint)*(ushort *)(param_1 + 0xe) >> 8 |
                         (*(ushort *)(param_1 + 0xe) & 0xff) << 8))))))))) {
        piVar5[5] = ((int)(uint)*(ushort *)(param_1 + 0x10) >> 8 |
                    (*(ushort *)(param_1 + 0x10) & 0xff) << 8) << 0x10 |
                    (int)(uint)*(ushort *)(param_1 + 0x12) >> 8 |
                    (*(ushort *)(param_1 + 0x12) & 0xff) << 8;
        if (piVar5[7] == 0) {
          piVar5[7] = ((int)(uint)*(ushort *)(param_1 + 0xc) >> 8 |
                      (*(ushort *)(param_1 + 0xc) & 0xff) << 8) << 0x10 |
                      (int)(uint)*(ushort *)(param_1 + 0xe) >> 8 |
                      (*(ushort *)(param_1 + 0xe) & 0xff) << 8;
          *(ushort *)(piVar5 + 6) = *param_2 >> 8 | *param_2 << 8;
        }
        if (piVar5[0x11] == 0) {
          uVar3 = param_3 - 8;
          if ((uint)piVar5[0xf] < uVar3) {
            piVar5[0x11] = piVar5[0xf];
          }
          else {
            piVar5[0x11] = uVar3;
          }
          FUN_02051890(param_2 + 4,piVar5[0x10],piVar5[0x11],uVar4,uVar3);
          if (piVar5[1] == 3) {
            piVar5[1] = 0;
            FUN_020531dc(*piVar5);
          }
          else if (((code *)piVar5[0xe] != (code *)0x0) &&
                  (iVar1 = (*(code *)piVar5[0xe])(piVar5[0x10],piVar5[0x11],piVar5), iVar1 != 0)) {
            piVar5[0x11] = 0;
          }
        }
        break;
      }
    }
    OS_RestoreInterrupts(uVar2);
  }
  return;
}

