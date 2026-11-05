
void FUN_0205de94(void)

{
  short sVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar3 = &DAT_020ae58c;
  iVar4 = 0;
  do {
    if (*(int *)(puVar3 + 0x110) << 0x1f < 0) {
      if (*(int *)(puVar3 + 0x114) == 0) {
        FUN_0205dd64(puVar3);
      }
      else {
        if ((*(int *)(puVar3 + 0x110) << 0x1d < 0) && (*(int *)(puVar3 + 0x118) != 0)) {
          FUN_0205bdd4(puVar3);
          *(uint *)(puVar3 + 0x110) = *(uint *)(puVar3 + 0x110) | 2;
          *(uint *)(puVar3 + 0x110) = *(uint *)(puVar3 + 0x110) & 0xfffffffb;
        }
        if (*(int *)(puVar3 + 0x110) << 0x1e < 0) {
          FUN_0205e044(puVar3 + 0xe8);
          sVar1 = *(short *)(&DAT_02091db0 + *(int *)(puVar3 + 0x154) * 2);
          iVar2 = FUN_0205e05c(puVar3 + 0xe8);
          iVar2 = (int)*(short *)(&DAT_02091db0 + (iVar2 >> 8) * 2) + (int)sVar1;
          if (iVar2 != *(int *)(puVar3 + 0x158)) {
            FUN_0205bd40(puVar3,iVar2);
            *(int *)(puVar3 + 0x158) = iVar2;
          }
          if ((*(int *)(puVar3 + 0x110) << 0x1c < 0) &&
             (iVar2 = FUN_0205e02c(puVar3 + 0xe8), iVar2 != 0)) {
            FUN_0205dd64(puVar3);
          }
        }
      }
    }
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 0x170;
  } while (iVar4 < 4);
  return;
}

