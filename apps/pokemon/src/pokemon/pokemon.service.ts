import { Injectable } from "@nestjs/common";
import { PrismaService } from "../prisma/prisma.service";
import { PokemonServiceBase } from "./base/pokemon.service.base";

@Injectable()
export class PokemonService extends PokemonServiceBase {
  constructor(protected readonly prisma: PrismaService) {
    super(prisma);
  }
}
