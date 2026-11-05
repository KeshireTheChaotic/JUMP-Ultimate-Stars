
void FUN_02076510(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int extraout_r1;
  int iVar6;
  undefined4 *puVar7;
  code *unaff_r5;
  bool bVar8;
  
  puVar7 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x18d4);
  do {
    if (puVar7 == (undefined4 *)0x0) {
      return;
    }
    if (*(char *)((int)puVar7 + 0x5fb) == '\0') {
      if (puVar7[0x15d] == 0) {
LAB_02076740:
        bVar8 = false;
      }
      else {
        uVar4 = *(uint *)(puVar7[0x15b] + 0x3c);
        if ((uVar4 & 0x20) == 0) goto LAB_02076740;
        *(uint *)(puVar7[0x15b] + 0x3c) = uVar4 & 0xffffffef;
        *(uint *)(puVar7[0x15b] + 0x3c) = *(uint *)(puVar7[0x15b] + 0x3c) & 0xfffffffd;
        iVar6 = FUN_02077e70(puVar7,puVar7[0x15d]);
        if (iVar6 == 0) {
          *(byte *)(puVar7 + 0x174) =
               *(byte *)(puVar7 + 0x174) | (byte)(1 << *(sbyte *)(puVar7[0x15d] + 0x42));
          *(uint *)(puVar7[0x15b] + 0x3c) = *(uint *)(puVar7[0x15b] + 0x3c) | 0x10;
          *(uint *)(puVar7[0x15b] + 0x3c) = *(uint *)(puVar7[0x15b] + 0x3c) & 0xffffffdf;
          puVar7[0x15d] = 0;
        }
        else {
          FUN_02078a70(puVar7);
        }
        bVar8 = true;
        *(uint *)(puVar7[0x15b] + 0x3c) = *(uint *)(puVar7[0x15b] + 0x3c) | 2;
      }
      if (!bVar8) {
        if (puVar7[0x15e] != 0) {
          if ((*(uint *)(puVar7[0x15e] + 0x3c) & 0x1000) == 0) {
            iVar6 = FUN_02077e70(puVar7);
            if (iVar6 == 0) {
              puVar7[0x15e] = 0;
              goto LAB_020768a4;
            }
          }
          else {
            puVar7[0x15e] = 0;
          }
        }
        unaff_r5 = (code *)0x0;
        if (*(char *)((int)puVar7 + 0x5fa) == '\0') {
          cVar1 = *(char *)((int)puVar7 + 0x5f3);
          if ((cVar1 != '\0') && (*(char *)(puVar7 + 0x17d) == '\0')) {
            bVar2 = *(byte *)((int)puVar7 + 0x5f5);
            iVar6 = bVar2 - 8;
            if ((-1 < iVar6) && (iVar6 < 0xf0)) {
              iVar6 = FUN_0200d12c(*(undefined1 *)((int)puVar7 + 0x5f6),0x30);
              iVar5 = FUN_0200d12c(bVar2 - 8,0x30);
              unaff_r5 = (code *)puVar7[iVar6 * 5 + iVar5 + 2];
            }
          }
          *(char *)(puVar7 + 0x17d) = cVar1;
        }
        else {
          *(char *)((int)puVar7 + 0x5fa) = *(char *)((int)puVar7 + 0x5fa) + -1;
        }
        if ((unaff_r5 != (code *)0x0) &&
           (iVar6 = (*(code *)(&PTR_FUN_0209f510)[(byte)unaff_r5[0x40]])(puVar7,unaff_r5),
           iVar6 != 0)) {
          *(undefined1 *)((int)puVar7 + 0x5f7) = 1;
          *(byte *)(puVar7 + 0x17e) =
               (((byte)unaff_r5[0xe] & 0xf) + (char)unaff_r5[0x43]) * '0' + '\x18';
          *(char *)((int)puVar7 + 0x5f9) =
               ((char)((int)((byte)unaff_r5[0xe] & 0xf0) >> 4) + (char)unaff_r5[0x44]) * '0' +
               '\x18';
          if ((unaff_r5[0x40] == (code)0x0) &&
             (((*(uint *)(unaff_r5 + 0x3c) & 0x1000) == 0 && ((code *)puVar7[0x15b] != unaff_r5))))
          {
            puVar7[0x15e] = unaff_r5;
          }
        }
        if (*(char *)((int)puVar7 + 0x5f3) == '\0') {
          *(undefined1 *)((int)puVar7 + 0x5f7) = 0;
        }
      }
LAB_020768a4:
      bVar8 = *(char *)(DAT_0214bd80 + 0x1912) != '\0';
      if (bVar8) {
        unaff_r5 = (code *)puVar7[0x156];
      }
      if (bVar8 && unaff_r5 != (code *)0x0) {
        for (; unaff_r5 != (code *)0x0; unaff_r5 = *(code **)unaff_r5) {
          (**(code **)(unaff_r5 + 8))(puVar7,unaff_r5);
        }
      }
    }
    else {
      if (*(char *)((int)puVar7 + 0x5fa) == '\0') {
        if ((*(char *)((int)puVar7 + 0x5f3) != '\0') && (*(char *)(puVar7 + 0x17d) == '\0')) {
          iVar6 = FUN_0200d12c(*(undefined1 *)((int)puVar7 + 0x5f6),0x60);
          iVar6 = *(int *)((uint)(*(byte *)((int)puVar7 + 0x5f5) >> 7) * 8 + 0x209f534 + iVar6 * 4);
          if (iVar6 == *(char *)(puVar7 + 0x17c)) {
            iVar6 = -1;
          }
          if (*(char *)(DAT_0214bd80 + 0x1911) <= iVar6) {
            iVar6 = -1;
          }
          if (iVar6 != -1) {
            *(char *)((int)puVar7 + 0x5f1) = (char)iVar6;
          }
        }
        if ((*(char *)((int)puVar7 + 0x5f3) != '\0') ||
           (iVar6 = (int)*(char *)((int)puVar7 + 0x5f1), iVar6 == -1)) {
          *(char *)(puVar7 + 0x17d) = *(char *)((int)puVar7 + 0x5f3);
          iVar6 = -1;
        }
      }
      else {
        *(char *)((int)puVar7 + 0x5fa) = *(char *)((int)puVar7 + 0x5fa) + -1;
        iVar6 = -1;
      }
      *(short *)(puVar7 + 0x17f) = *(short *)(puVar7 + 0x17f) + -1;
      if (*(short *)(puVar7 + 0x17f) < 0) {
        unaff_r5 = (code *)(int)*(char *)(DAT_0214bd80 + 0x1911);
        uVar3 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
        FUN_0200d338(uVar3,unaff_r5);
        iVar6 = extraout_r1;
        if (extraout_r1 == *(char *)(puVar7 + 0x17c)) {
          iVar6 = extraout_r1 + 1;
        }
        if (*(char *)(DAT_0214bd80 + 0x1911) <= iVar6) {
          iVar6 = 0;
        }
      }
      if (iVar6 != -1) {
        *(undefined2 *)(puVar7 + 0x17f) = 0;
        *(undefined1 *)((int)puVar7 + 0x5fb) = 0;
        unaff_r5 = (code *)puVar7[0x17a];
        (*unaff_r5)(puVar7,puVar7[0x17b],10);
      }
    }
    puVar7 = (undefined4 *)*puVar7;
  } while( true );
}

