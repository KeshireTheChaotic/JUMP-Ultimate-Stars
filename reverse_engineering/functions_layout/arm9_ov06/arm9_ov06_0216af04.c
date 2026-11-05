
void FUN_0216af04(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  puVar6 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  puVar7 = (undefined4 *)*puVar6;
  while (puVar7 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar7;
    if ((*(ushort *)((int)puVar7 + 0x26) & 0x100) == 0) {
      if ((*(ushort *)((int)puVar7 + 0x26) & 0x40) == 0) {
        iVar3 = (*(code *)(&PTR_FUN_0217278c)[*(byte *)((int)puVar7 + 0x1a)])(puVar7);
        if (((*(ushort *)((int)puVar7 + 0x26) & 2) == 0) &&
           (sVar1 = *(short *)(puVar7 + 6), *(short *)(puVar7 + 6) = sVar1 + -1, sVar1 < 0)) {
          iVar3 = 0;
        }
      }
      else {
        if ((DAT_021729f0 & 1) == 0) {
          DAT_021729f8 = 0x1000;
          DAT_021729f0 = DAT_021729f0 | 1;
          DAT_021729fc = 0xe66;
          DAT_02172a00 = 0x999;
          DAT_02172a04 = 0x733;
          DAT_02172a08 = 0x4cc;
          DAT_02172a0c = 0x266;
          DAT_02172a10 = 0x199;
          DAT_02172a14 = 0x147;
          DAT_02172a18 = 0xf5;
          DAT_02172a1c = 0xa3;
        }
        if ((DAT_021729f4 & 1) == 0) {
          DAT_02172a20 = 0x1000;
          DAT_021729f4 = DAT_021729f4 | 1;
          DAT_02172a24 = 0x1066;
          DAT_02172a28 = 0x10cc;
          DAT_02172a2c = 0x1133;
          DAT_02172a30 = 0x1199;
          DAT_02172a34 = 0x1200;
          DAT_02172a38 = 0x1266;
          DAT_02172a3c = 0x12cc;
          DAT_02172a40 = 0x1333;
          DAT_02172a44 = 0x1400;
        }
        iVar3 = FUN_0216a910(puVar7);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + 8);
          bVar5 = *(char *)((int)puVar7 + 0x1b) + 1;
          *(byte *)((int)puVar7 + 0x1b) = bVar5;
          local_28 = (&DAT_021729f8)[bVar5];
          FUN_02169194(iVar3,&local_28);
          local_2c = (&DAT_02172a20)[*(byte *)((int)puVar7 + 0x1b)];
          FUN_02023700(*(undefined4 *)(iVar3 + 4),&local_2c);
          if (*(byte *)((int)puVar7 + 0x1b) < 8) {
            iVar3 = 1;
          }
          else {
            iVar3 = FUN_0216a910(puVar7);
            iVar3 = *(int *)(iVar3 + 8);
            local_30 = 0;
            FUN_02169194(iVar3,&local_30);
            piVar4 = *(int **)(iVar3 + 4);
            (**(code **)(*piVar4 + 0xd8))(piVar4,0);
            iVar3 = 0;
          }
        }
      }
      if (iVar3 == 0) {
        if (((*(uint *)(puVar7[2] + 8) & 0x2000) == 0) ||
           ((*(ushort *)((int)puVar7 + 0x26) & 0x40) != 0)) {
          FUN_02037c24(puVar6,puVar7);
          FUN_02037b98(puVar6 + 2,puVar7);
        }
        else {
          iVar3 = FUN_0216a910(puVar7);
          if (iVar3 != 0) {
            iVar8 = *(int *)(iVar3 + 8);
            iVar3 = FUN_0206c7fc(0x220007,0,0,0);
            if (iVar8 == 0) {
              (**(code **)(**(int **)(iVar3 + 4) + 0xd4))(*(int **)(iVar3 + 4),0);
            }
            else {
              (**(code **)(**(int **)(iVar3 + 4) + 0xd4))
                        (*(int **)(iVar3 + 4),*(undefined4 *)(iVar8 + 4));
            }
            *(undefined1 *)((int)puVar7 + 0x1b) = 0;
            *(ushort *)((int)puVar7 + 0x26) = *(ushort *)((int)puVar7 + 0x26) | 0x40;
          }
        }
      }
    }
    puVar7 = puVar2;
  }
  FUN_0216b220(puVar6);
  return;
}

