
void FUN_0219627c(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  uVar1 = OS_DisableInterrupts();
  uVar8 = FUN_02054b44();
  uVar2 = (uint)uVar8 >> 0x10 | (int)((ulonglong)uVar8 >> 0x20) << 0x10;
  uVar5 = 0;
  puVar7 = &DAT_021a9f24;
  iVar6 = 0;
  puVar4 = &DAT_021a9f24;
  do {
    if ((((puVar4[0x5a] != '\0') && (param_2 != 0)) && (param_2 == *(int *)(puVar4 + 0x54))) &&
       ((param_3 != 0 && (param_3 == *(ushort *)(puVar4 + 0x58))))) {
      puVar7 = puVar4;
      break;
    }
    if (uVar5 != 0xffffffff) {
      if (puVar4[0x5a] == '\0') {
        uVar5 = 0xffffffff;
        puVar7 = puVar4;
      }
      else {
        uVar3 = uVar2 - *(int *)(puVar4 + 0x50);
        if (uVar5 < uVar3) {
          uVar5 = uVar3;
          puVar7 = puVar4;
        }
      }
    }
    puVar4 = puVar4 + 0x5c;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  FUN_02051890(param_1 + 0x74,puVar7,0x20);
  FUN_02051890(param_1,puVar7 + 0x20,0x30);
  *(uint *)(puVar7 + 0x50) = uVar2;
  puVar7[0x5a] = 1;
  *(int *)(puVar7 + 0x54) = param_2;
  *(short *)(puVar7 + 0x58) = (short)param_3;
  OS_RestoreInterrupts(uVar1);
  return;
}

